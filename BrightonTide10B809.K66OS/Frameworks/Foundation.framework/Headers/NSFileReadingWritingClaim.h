/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileAccessClaim.h"

@class NSURL, NSFileAccessNode;

__attribute__((visibility("hidden")))
@interface NSFileReadingWritingClaim : NSFileAccessClaim {
	NSURL *_readingURL;	// 76 = 0x4c
	BOOL _readingURLDidChange;	// 80 = 0x50
	unsigned _readingOptions;	// 84 = 0x54
	NSURL *_writingURL;	// 88 = 0x58
	BOOL _writingURLDidChange;	// 92 = 0x5c
	unsigned _writingOptions;	// 96 = 0x60
	NSFileAccessNode *_readingLocation;	// 100 = 0x64
	NSFileAccessNode *_writingLocation;	// 104 = 0x68
	NSFileAccessNode *_rootNode;	// 108 = 0x6c
	int _readingLinkResolutionCount;	// 112 = 0x70
}
- (id)initWithClient:(id)client messageParameters:(id)parameters replySender:(id)sender;	// 0x319cb40d
- (id)initWithPurposeID:(id)purposeID readingURL:(id)url options:(unsigned)options writingURL:(id)url4 options:(unsigned)options5 claimer:(id)claimer;	// 0x319cb365
- (BOOL)blocksClaim:(id)claim;	// 0x319cc781
- (void)dealloc;	// 0x319cb669
- (void)devalueSelf;	// 0x319cc591
- (BOOL)evaluateSelfWithRootNode:(id)rootNode checkSubarbitrability:(BOOL)subarbitrability;	// 0x319cba25
- (void)forwardUsingMessageSender:(id)sender crashHandler:(id)handler;	// 0x319cb6cd
- (void)granted;	// 0x319cbd05
- (void)invokeClaimer;	// 0x319cc251
- (BOOL)isBlockedByReadingItemAtLocation:(id)location options:(unsigned)options;	// 0x319cbbf9
- (BOOL)isBlockedByWritingItemAtLocation:(id)location options:(unsigned)options;	// 0x319cbc5d
- (void)itemAtLocation:(id)location wasReplacedByItemAtLocation:(id)location2;	// 0x319cc6fd
@end

