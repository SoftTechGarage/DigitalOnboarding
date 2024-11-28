//
//  ViewController.swift
//  OnboardExample
//
//

import UIKit
import onboarding
import NFCReaderApple
class ViewController: UIViewController, OnboardingDelegate {
    
    @IBOutlet weak var deeplinkTextField: UITextView!
    @IBOutlet private weak var label: UILabel!
    
    @IBOutlet private weak var switchToggle: UISwitch!
    
    @IBOutlet private weak var modeInfoLabel: UILabel!
    override func viewDidLoad() {
        super.viewDidLoad()
        label.text = "Version \(CoreReader.getSDKVersion())"
        label.textColor = .red
        Onboarding.delegate = self
        navigationController?.isNavigationBarHidden = true
        if  ThemeManager.shared.getStyle() == .dark {
            switchToggle.isOn = true
            modeInfoLabel.text = "Dark Mode"
        } else {
            switchToggle.isOn = false
            modeInfoLabel.text = "Light Mode"
        }
        
    }

    
    /**
     deeplinkText = https://www.trademaster.com.tr/onboarding/?processId={encodedProcessIdstring}
     */
    @IBAction func openOnboarding(_ sender: Any) {
        
        if let deeplinkText = self.deeplinkTextField.text,
           !deeplinkText.isEmpty
        {
            
            let urlComponents = URLComponents(string: deeplinkText)
            let pId = urlComponents?.queryItems?.first(where: { $0.name == "processId" })?.value ?? ""
            
            if !pId.isEmpty {
                Onboarding
                    .init(vc: self.navigationController)
                    .setProcess(process: pId)
                    .start()
                
            }
            
        } else {
            
            Onboarding(vc: self.navigationController!)
                .setLanguage(language: "tr")
                .setEndpoint(endPoint: "http://YOUR_ENDPOINT")
                .setPredefined(predefined: "YOUR_ID")
                .setExternalKey(externalKey: "YOUR_EXTERNAL_KEY") //optional
                .start()
        }
        
    }
    
    @IBAction func switchChange(_ sender: Any) {
        ThemeManager.shared.setStyle(style: switchToggle.isOn ? .dark : .light)
        modeInfoLabel.text = switchToggle.isOn ? "Dark Mode" : "Light Mode"
    }
    
        
    func onOnboardingResult(resultCode: onboarding.OnboardingResult, code: String, message: String, processId: String) {
        
    }
}
