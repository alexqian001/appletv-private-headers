/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSOperation.h>

@class NSLock, NSData, NSURL;

__attribute__((visibility("hidden")))
@interface MPLoadSAPContextOperation : NSOperation {
	NSData *_certificateData;	// 12 = 0xc
	NSURL *_certURL;	// 16 = 0x10
	NSLock *_lock;	// 20 = 0x14
	id _outputBlock;	// 24 = 0x18
	NSURL *_setupURL;	// 28 = 0x1c
}
@property(retain) NSData *certificateData;	// G=0x2e3838b9; S=0x2e38397d; 
@property(copy) id outputBlock;	// G=0x2e38390d; S=0x2e3839f5; 
- (id)initWithSetupURL:(id)setupURL certificateURL:(id)url;	// 0x2e3837bd
- (void).cxx_destruct;	// 0x2e38451d
- (id)_loadCertificateData:(id *)data;	// 0x2e383ca5
- (id)_performSetupWithData:(id)data error:(id *)error;	// 0x2e384075
// declared property getter: - (id)certificateData;	// 0x2e3838b9
- (void)main;	// 0x2e383a79
// declared property getter: - (id)outputBlock;	// 0x2e38390d
// declared property setter: - (void)setCertificateData:(id)data;	// 0x2e38397d
// declared property setter: - (void)setOutputBlock:(id)block;	// 0x2e3839f5
@end
