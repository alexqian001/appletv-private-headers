/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ISURLOperationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRImageManager, SSURLRequestProperties, NSString, ISURLOperation;
@protocol BRMusicStoreImageDecryptionAgent;

__attribute__((visibility("hidden")))
@interface BRImageLoadJob : XXUnknownSuperclass <ISURLOperationDelegate> {
	NSString *_imageName;	// 4 = 0x4
	SSURLRequestProperties *_requestProperties;	// 8 = 0x8
	BOOL _writeImage;	// 12 = 0xc
	id _output;	// 16 = 0x10
	BRImageManager *_manager;	// 20 = 0x14
	id<BRMusicStoreImageDecryptionAgent> _decryptionAgent;	// 24 = 0x18
	ISURLOperation *_operation;	// 28 = 0x1c
}
@property(readonly, retain) id output;	// G=0x3a70cd; converted property
@property(readonly, retain) SSURLRequestProperties *requestProperties;	// G=0x3a707d; converted property
@property(readonly, assign) BOOL writeImage;	// G=0x3a70bd; converted property
- (id)initWithName:(id)name requestProperties:(id)properties decryptionAgent:(id)agent writeImage:(BOOL)image;	// 0x3a6ea1
- (id)initWithName:(id)name url:(id)url headerFields:(id)fields decryptionAgent:(id)agent writeImage:(BOOL)image;	// 0x3a6f41
- (void)cancel;	// 0x3a7181
- (void)dealloc;	// 0x3a6fcd
- (id)decryptionAgent;	// 0x3a70ad
- (id)name;	// 0x3a706d
- (void)operation:(id)operation failedWithError:(id)error;	// 0x3a720d
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x3a71a1
// converted property getter: - (id)output;	// 0x3a70cd
// converted property getter: - (id)requestProperties;	// 0x3a707d
- (void)runForManager:(id)manager;	// 0x3a70dd
- (id)url;	// 0x3a708d
// converted property getter: - (BOOL)writeImage;	// 0x3a70bd
@end
