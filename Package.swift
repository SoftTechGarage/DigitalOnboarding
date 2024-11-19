// swift-tools-version: 5.7
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "OnboardSPM",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "OnboardSPM",
            targets: ["OnboardSPM"]),
        
    ],
    dependencies: [
        .package(url: "https://github.com/jitsi/webrtc", from: "106.0.0"),
        .package(url: "https://github.com/Giphy/giphy-ios-sdk", from: "2.2.6"),
        .package(url: "https://github.com/SwiftyTesseract/libtesseract.git", from: "0.2.0"),
    ],
    targets: [
        .target(
            name: "OnboardSPM",
            dependencies: [
                "JitsiMeetSDK",
                "NFCReaderApple",
                "onboarding",
                "OpenSSL",
                "libtesseract",
                .product(name: "GiphyUISDK", package: "giphy-ios-sdk"),
                .product(name: "WebRTC", package: "webrtc"),
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
    ]
)
