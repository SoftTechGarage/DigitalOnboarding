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
        .package(url: "https://github.com/jitsi/webrtc.git", exact: "124.0.2"),
        .package(url: "https://github.com/Giphy/giphy-ios-sdk.git", exact: "2.2.16"),
        .package(url: "https://github.com/SwiftyTesseract/libtesseract.git", exact: "0.2.0")
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
                "hermes",
                .product(name: "GiphyUISDK", package: "giphy-ios-sdk"),
                .product(name: "WebRTC", package: "webrtc"),
            ]),
        .binaryTarget(
            name: "hermes",
            path: "Sources/hermes.xcframework"),
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
