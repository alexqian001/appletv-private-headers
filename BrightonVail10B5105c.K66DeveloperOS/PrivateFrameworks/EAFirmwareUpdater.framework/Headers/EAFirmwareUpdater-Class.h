/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

#import "EAAccessoryDelegate.h"
#import "NSStreamDelegate.h"
#import <MobileAssetUpdater.h> // Unknown library

@class EAAccessory, NSString, EASession, NSURL, NSMutableData, NSObject, iAUPServer;
@protocol OS_dispatch_queue;

@interface EAFirmwareUpdater : MobileAssetUpdater <EAAccessoryDelegate, NSStreamDelegate> {
	unsigned _productIDCode;	// 28 = 0x1c
	EAAccessory *_accessory;	// 32 = 0x20
	NSString *_protocolString;	// 36 = 0x24
	EASession *_session;	// 40 = 0x28
	NSString *_bootloaderProtocol;	// 44 = 0x2c
	NSString *_appProtocol;	// 48 = 0x30
	unsigned _firmwareVersionMajor;	// 52 = 0x34
	unsigned _firmwareVersionMinor;	// 56 = 0x38
	unsigned _firmwareVersionRelease;	// 60 = 0x3c
	NSString *_firmwareBundleFilename;	// 64 = 0x40
	NSURL *_firmwareBundleURL;	// 68 = 0x44
	id _applyCompletion;	// 72 = 0x48
	id _progressHandler;	// 76 = 0x4c
	NSMutableData *_outputData;	// 80 = 0x50
	iAUPServer *_iAUPServer;	// 84 = 0x54
	NSObject<OS_dispatch_queue> *_eaNotificationDispatchQueue;	// 88 = 0x58
	BOOL _firmwareUpdateComplete;	// 92 = 0x5c
	NSString *_updateBundleFilename;	// 96 = 0x60
	NSURL *_updateBundleURL;	// 100 = 0x64
}
@property(retain, nonatomic) EAAccessory *accessory;	// G=0x34e70971; S=0x34e6ed19; @synthesize=_accessory
@property(retain, nonatomic) NSString *appProtocol;	// G=0x34e709e1; S=0x34e709f1; @synthesize=_appProtocol
@property(copy, nonatomic) id applyCompletion;	// G=0x34e70a61; S=0x34e70a75; @synthesize=_applyCompletion
@property(retain, nonatomic) NSString *bootloaderProtocol;	// G=0x34e709c1; S=0x34e709d1; @synthesize=_bootloaderProtocol
@property(retain, nonatomic) NSString *firmwareBundleFilename;	// G=0x34e70a01; S=0x34e70a11; @synthesize=_updateBundleFilename
@property(retain, nonatomic) NSURL *firmwareBundleURL;	// G=0x34e70a21; S=0x34e70a31; @synthesize=_updateBundleURL
@property(assign, nonatomic) unsigned productIDCode;	// G=0x34e709b1; S=0x34e6ec95; @synthesize=_productIDCode
@property(copy, nonatomic) id progressHandler;	// G=0x34e70a85; S=0x34e70a99; @synthesize=_progressHandler
@property(retain, nonatomic) NSString *protocolString;	// G=0x34e70991; S=0x34e709a1; @synthesize=_protocolString
@property(retain, nonatomic) iAUPServer *server;	// G=0x34e70a41; S=0x34e70a51; @synthesize=_iAUPServer
@property(retain, nonatomic) EASession *session;	// G=0x34e70981; S=0x34e6ef99; @synthesize=_session
+ (id)appProtocolStringWithProductIDCode:(unsigned)productIDCode;	// 0x34e6e845
+ (id)bootloaderProtocolStringWithProductIDCode:(unsigned)productIDCode;	// 0x34e6e7f9
+ (id)findAccessoryWithProductIDCode:(unsigned)productIDCode;	// 0x34e6e891
- (id)initWithProductIDCode:(unsigned)productIDCode assetType:(id)type;	// 0x34e6eac9
- (void)_accessoryDidConnect:(id)_accessory;	// 0x34e705a1
- (void)_accessoryDidDisconnect:(id)_accessory;	// 0x34e70819
// declared property getter: - (id)accessory;	// 0x34e70971
- (void)accessoryDidDisconnect:(id)accessory;	// 0x34e70495
// declared property getter: - (id)appProtocol;	// 0x34e709e1
// declared property getter: - (id)applyCompletion;	// 0x34e70a61
- (id)applyFirmware:(id)firmware progress:(id)progress;	// 0x34e6f899
- (id)assetWithMaxVersion:(id)maxVersion;	// 0x34e6f465
// declared property getter: - (id)bootloaderProtocol;	// 0x34e709c1
- (void)dealloc;	// 0x34e6ebf9
- (BOOL)findAccessory;	// 0x34e6ec25
// declared property getter: - (id)firmwareBundleFilename;	// 0x34e70a01
// declared property getter: - (id)firmwareBundleURL;	// 0x34e70a21
- (void)firmwareUpdateComplete:(id)complete;	// 0x34e6ff49
- (id)flushOutput;	// 0x34e70239
- (void)handleInputData;	// 0x34e70371
- (id)openSession;	// 0x34e6fbe1
- (id)overrideQueryPredicateFromDict:(id)dict;	// 0x34e6f251
// declared property getter: - (unsigned)productIDCode;	// 0x34e709b1
// declared property getter: - (id)progressHandler;	// 0x34e70a85
// declared property getter: - (id)protocolString;	// 0x34e70991
- (id)queryPredicate;	// 0x34e6f379
// declared property getter: - (id)server;	// 0x34e70a41
// declared property getter: - (id)session;	// 0x34e70981
// declared property setter: - (void)setAccessory:(id)accessory;	// 0x34e6ed19
// declared property setter: - (void)setAppProtocol:(id)protocol;	// 0x34e709f1
// declared property setter: - (void)setApplyCompletion:(id)completion;	// 0x34e70a75
// declared property setter: - (void)setBootloaderProtocol:(id)protocol;	// 0x34e709d1
// declared property setter: - (void)setFirmwareBundleFilename:(id)filename;	// 0x34e70a11
// declared property setter: - (void)setFirmwareBundleURL:(id)url;	// 0x34e70a31
// declared property setter: - (void)setProductIDCode:(unsigned)code;	// 0x34e6ec95
// declared property setter: - (void)setProgressHandler:(id)handler;	// 0x34e70a99
// declared property setter: - (void)setProtocolString:(id)string;	// 0x34e709a1
// declared property setter: - (void)setServer:(id)server;	// 0x34e70a51
// declared property setter: - (void)setSession:(id)session;	// 0x34e6ef99
- (void)stream:(id)stream handleEvent:(unsigned)event;	// 0x34e70081
- (id)supportedProtocolForAccessory:(id)accessory;	// 0x34e6f0d1
- (void)updateComplete:(id)complete;	// 0x34e6ff6d
- (void)updateProgress:(double)progress;	// 0x34e6ff29
- (id)validateAsset;	// 0x34e6f741
- (id)validateAssetAttributes:(id)attributes;	// 0x34e6f5e1
- (id)writeData:(id)data;	// 0x34e6fdf9
@end

