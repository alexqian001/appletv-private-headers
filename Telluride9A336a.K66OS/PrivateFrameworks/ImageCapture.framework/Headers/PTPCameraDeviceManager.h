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
- (id)init;	// 0x301b68b1
- (void)closeDeviceImp:(id)imp;	// 0x301b57b5
- (void)closeSessionImp:(id)imp;	// 0x301b54a5
- (void)dealloc;	// 0x301b4531
- (void)deleteFileImp:(id)imp;	// 0x301b4d11
- (void)downloadFileImp:(id)imp;	// 0x301b4831
- (void)ejectImp:(id)imp;	// 0x301b478d
- (void)getMetadataOfFileImp:(id)fileImp;	// 0x301b4f2d
- (void)getThumbnailOfFileImp:(id)fileImp;	// 0x301b50f5
- (int)handleEvent:(id)event onDevice:(id)device contextInfo:(void *)info;	// 0x301b4659
- (void)handleEventImp:(id)imp;	// 0x301b455d
- (void)netService:(id)service didNotResolve:(id)resolve;	// 0x301b5fb9
- (void)netService:(id)service didUpdateTXTRecordData:(id)data;	// 0x301b5ee1
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x301b67a1
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x301b6735
- (void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;	// 0x301b66c9
- (void)netServiceDidResolveAddress:(id)netService;	// 0x301b605d
- (void)netServiceDidStop:(id)netService;	// 0x301b5f4d
- (void)openDeviceImp:(id)imp;	// 0x301b5a45
- (void)openSessionImp:(id)imp;	// 0x301b55d9
- (void)startRunning;	// 0x301b6885
- (void)stopRunning;	// 0x301b6859
- (void)syncClockImp:(id)imp;	// 0x301b538d
- (id)usbLocationIDsOfPTPDevices;	// 0x301b5d21
@end

