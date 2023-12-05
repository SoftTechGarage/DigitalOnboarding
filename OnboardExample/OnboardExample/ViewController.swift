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
            .setEndpoint(endPoint: "http://apigateway.onboardinguat.onplateau.com")
            .setJson(json: "[{\"code\":\"createLeadParty_tckn\",\"value\":\"50167783254\"},{\"code\":\"createLeadParty_name\",\"value\":\"Salih\"},{\"code\":\"createLeadParty_surname\",\"value\":\"KIR\"},{\"code\":\"createLeadParty_phone\",\"value\":\"5079740808\"},{\"code\":\"createLeadParty_countryCode\",\"value\":\"+90\"},{\"code\":\"createLeadParty_email\",\"value\":\"cagri.ertek@softtech.com.tr\"},{\"code\":\"createLeadParty_primaryContactType\",\"value\":\"PHONE\"},{\"code\":\"createLeadParty_hasNFCPhone\",\"value\":\"true\"},{\"code\":\"createLeadParty_hasNewIdentityCard\",\"value\":\"true\"}]")
            .setPredefined(predefined: "com.trademaster.mobile")
            .setExternalKey(externalKey: "") //optional
            .start()
    }
    
    func onOnboardingResult(resultCode: onboarding.OnboardingResult, code: String, message: String, processId: String) {
        
    }
}
