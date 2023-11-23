// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "OnboardSPM",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "OnboardSPM",
            targets: ["OnboardSPM"]),
        
    ],
    dependencies: [
        .package(url: "https://github.com/Giphy/giphy-ios-sdk", from: "2.2.6"),
    ],
    targets: [
        .target(
            name: "OnboardSPM",
            dependencies: [
                "JitsiMeetSDK",
                "NFCReaderApple",
                "onboarding",
                "OpenSSL",
                "WebRTC",
                .product(name: "GiphyUISDK", package: "giphy-ios-sdk"),
            ]),
        .binaryTarget(
            name: "JitsiMeetSDK",
            path: "Sources/JitsiMeetSDK.xcframework"),
        .binaryTarget(
            name: "NFCReaderApple",
            path: "Sources/NFCReaderApple.xcframework"),
        .binaryTarget(
            name: "onboarding",
            path: "Sources/onboarding.xcframework"),
        .binaryTarget(
            name: "OpenSSL",
            path: "Sources/OpenSSL.xcframework"),
        .binaryTarget(
            name: "WebRTC",
            url: "https://github.com/jitsi/webrtc/releases/download/v111.0.2/WebRTC.xcframework.zip",
            checksum: "5033f23040628e76baa3a9c83c28d89e86ce8127a5a83b5b7d077ede24182b07"
        ),
    ]
)
