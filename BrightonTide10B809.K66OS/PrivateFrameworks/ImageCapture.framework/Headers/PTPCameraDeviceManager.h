/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"
#import "DeviceManager.h"

@class NSNetServiceBrowser, NSMutableArray;

@interface PTPCameraDeviceManager : DeviceManager <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
	NSNetServiceBrowser *_netServiceBrowser;	// 16 = 0x10
	NSMutableArray *_netServices;	// 20 = 0x14
}
- (id)init;	// 0x342035e1
- (void)closeDeviceImp:(id)imp;	// 0x342044c5
- (void)closeSessionImp:(id)imp;	// 0x3420491d
- (void)dealloc;	// 0x34203629
- (void)deleteFileImp:(id)imp;	// 0x34204fc1
- (void)downloadFileImp:(id)imp;	// 0x342051e5
- (void)ejectImp:(id)imp;	// 0x342056d1
- (void)getMetadataOfFileImp:(id)fileImp;	// 0x34204dfd
- (void)getThumbnailOfFileImp:(id)fileImp;	// 0x34204b71
- (int)handleEvent:(id)event onDevice:(id)device contextInfo:(void *)info;	// 0x34205779
- (void)handleEventImp:(id)imp;	// 0x342058ad
- (void)netService:(id)service didNotResolve:(id)resolve;	// 0x34203e75
- (void)netService:(id)service didUpdateTXTRecordData:(id)data;	// 0x34203f89
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x342036b1
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x34203769
- (void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;	// 0x342037d5
- (void)netServiceDidResolveAddress:(id)netService;	// 0x34203841
- (void)netServiceDidStop:(id)netService;	// 0x34203f1d
- (void)openDeviceImp:(id)imp;	// 0x342041c5
- (void)openSessionImp:(id)imp;	// 0x3420473d
- (void)startRunning;	// 0x34203655
- (void)stopRunning;	// 0x34203681
- (void)syncClockImp:(id)imp;	// 0x34204a55
- (id)usbLocationIDsOfPTPDevices;	// 0x34203ff5
@end

