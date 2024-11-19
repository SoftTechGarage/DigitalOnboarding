# DigitalOnboarding SDK

Softtech DigitalOnboarding iOS SDK.

## Installation of the Framework

### Swift Package Manager

The preferred installation method is with [Swift Package Manager](https://swift.org/package-manager/). This is a tool for automating the distribution of Swift code and is integrated into the swift compiler. In Xcode, do the following:

- Select **File ▸ Add Packages...**
- Search for `https://github.com/SoftTechGarage/DigitalOnboarding` in the search bar.
- Set the **Branch** to **release/v0.0.1**. //Please contact Softtech to ask for your version.
- Make sure your project name is selected in **Add to Project**.
- Then, **Add Package**.




## 1: Permissions

```xml
<key>com.apple.developer.nfc.readersession.iso7816.select-identifiers</key>
<array>
<string>A0000002471001</string>
<string>00000000000000</string>
</array>

<key>NSCameraUsageDescription</key>
<string> We need to access camera.</string>
	
<key>NSMicrophoneUsageDescription</key>
<string> We need to access microphone.</string>   

<key>NFCReaderUsageDescription</key>
<string> We need to access NFC for scan passport.</string>

```
## 2: Include NFC in your project
Select "Signing & Capabilities -> Capability-> Near Field Communication Tag Reading" and then remove the first item from the "entitlements" file created under the project.

```
DELETE “Item 0 (Near Field Communication Tag Reading Session Format) - NFC Data Exchange Format “
```
Only the item listed below should remain.
```
Item 1 (Near Field Communication Tag Reading Session Format) - NFC tag-specific data protocol

After doing that open entitlement as source code and add this line <string>NDEF</string> after <string>TAG</string> line.
```
## 3: To open OnboardingExample Project -> tessdata
Open the project, save the file named tessdata in the project to your locale, and then add this tessdata file to your own project. When adding, select "mrz.traineddata", "Create folder reference" and add it to your project file.

## 4: To open OnboardingSDK

```
1. Create a viewcontroller

```
You can review the sample code for the controls.
```swift
import UIKit
import onboarding

class ViewController: UIViewController, OnboardingDelegate {
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        //Set delegate
        Onboarding.delegate = self
    }
    
    func onOnboardingResult(resultCode:OnboardingResult, code:String, message:String, processId:String) {
        
    }
    
    
    //Start sdk
    func startOnboarding() {
        Onboarding(vc:self.navigationController)
            .setLanguage(language: "tr")
            .setEndpoint(endPoint: "http://YOUR_ENDPOINT")
            .setJson(json: jsonText.text) //optional
            .setPredefined(predefined: "YOUR_ID")
            .setExternalKey(externalKey: "YOUR_EXTERNAL_KEY") //optional
            .start()
    }
    
     
}

```
