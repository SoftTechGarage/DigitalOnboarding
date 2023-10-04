//
//  ViewController.swift
//  OnboardExample
//
//

import UIKit
import onboarding

class ViewController: UIViewController, OnboardingDelegate {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        Onboarding.delegate = self
        
        
        let width: CGFloat = 100
        let openBtn = UIButton(frame: CGRect(x: (view.frame.width - width) / 2,
                                             y: view.frame.height / 2,
                                             width: width,
                                             height: 40))
        openBtn.setTitle("Open SDK", for: .normal)
        openBtn.addTarget(self, action: #selector(openOnboarding), for: .touchUpInside)
        openBtn.setTitleColor(UIColor.blue, for: .normal)
        view.addSubview(openBtn)
    }

    @objc func openOnboarding(){
        
        Onboarding(vc: self.navigationController!)
            .setLanguage(language: "tr")
            .setEndpoint(endPoint: "http://YOUR_ENDPOINT")
            .setPredefined(predefined: "YOUR_ID")
            .setExternalKey(externalKey: "YOUR_EXTERNAL_KEY") //optional
            .start()
    }
    
    func onOnboardingResult(resultCode: onboarding.OnboardingResult, code: String, message: String, processId: String) {
        
    }
}

