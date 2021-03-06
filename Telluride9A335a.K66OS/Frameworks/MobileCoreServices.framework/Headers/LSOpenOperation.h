/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import <NSOperation.h> // Unknown library

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface LSOpenOperation : NSOperation {
@private
	BOOL _executing;	// 12 = 0xc
	BOOL _finished;	// 13 = 0xd
	NSURL *_resourceURL;	// 16 = 0x10
	NSString *_applicationIdentifier;	// 20 = 0x14
	NSString *_documentIdentifier;	// 24 = 0x18
	id _userInfoPList;	// 28 = 0x1c
	id _delegate;	// 32 = 0x20
	int _result;	// 36 = 0x24
}
@property(readonly, assign, getter=isExecuting) BOOL executing;	// G=0x32912da5; converted property
@property(readonly, assign, getter=isFinished) BOOL finished;	// G=0x32912db5; converted property
- (id)initForOpeningResource:(id)openingResource usingApplication:(id)application uniqueDocumentIdentifier:(id)identifier userInfo:(id)info delegate:(id)delegate;	// 0x32912dc5
- (void)completeOperation;	// 0x32912fed
- (void)dealloc;	// 0x329134fd
- (BOOL)isConcurrent;	// 0x32912da1
// converted property getter: - (BOOL)isExecuting;	// 0x32912da5
// converted property getter: - (BOOL)isFinished;	// 0x32912db5
- (void)main;	// 0x32913071
- (void)start;	// 0x32912ec1
@end

