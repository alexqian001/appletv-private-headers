/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTaskGroup.h"

@class NSSet, NSMutableArray, NSMutableDictionary, NSURL, NSDictionary, NSMutableSet;

@interface CoreDAVMultiMoveWithFallbackTaskGroup : CoreDAVTaskGroup {
	NSSet *_sourceURLs;	// 44 = 0x2c
	NSURL *_destinationURL;	// 48 = 0x30
	int _overwrite;	// 52 = 0x34
	BOOL _useFallback;	// 56 = 0x38
	NSDictionary *_sourceEntityDataPayloads;	// 60 = 0x3c
	NSDictionary *_sourceEntityDataContentTypes;	// 64 = 0x40
	NSDictionary *_sourceEntityETags;	// 68 = 0x44
	NSMutableSet *_destinationURLs;	// 72 = 0x48
	NSMutableDictionary *_destinationEntityETags;	// 76 = 0x4c
	NSMutableArray *_outstandingSourceURLsToMove;	// 80 = 0x50
}
@property(readonly, assign, nonatomic) NSMutableDictionary *destinationEntityETags;	// G=0x3372dc91; @synthesize=_destinationEntityETags
@property(readonly, assign, nonatomic) NSURL *destinationURL;	// G=0x3372dc31; @synthesize=_destinationURL
@property(readonly, assign, nonatomic) NSMutableSet *destinationURLs;	// G=0x3372dca1; @synthesize=_destinationURLs
@property(retain) NSMutableArray *outstandingSourceURLsToMove;	// G=0x3372dcb1; S=0x3372dcc5; @synthesize=_outstandingSourceURLsToMove
@property(readonly, assign, nonatomic) int overwrite;	// G=0x3372dc41; @synthesize=_overwrite
@property(readonly, assign, nonatomic) NSDictionary *sourceEntityDataContentTypes;	// G=0x3372dc71; @synthesize=_sourceEntityDataContentTypes
@property(readonly, assign, nonatomic) NSDictionary *sourceEntityDataPayloads;	// G=0x3372dc61; @synthesize=_sourceEntityDataPayloads
@property(readonly, assign, nonatomic) NSDictionary *sourceEntityETags;	// G=0x3372dc81; @synthesize=_sourceEntityETags
@property(readonly, assign, nonatomic) NSSet *sourceURLs;	// G=0x3372dc21; @synthesize=_sourceURLs
@property(readonly, assign, nonatomic) BOOL useFallback;	// G=0x3372dc51; @synthesize=_useFallback
- (id)initWithSourceURLs:(id)sourceURLs destinationURL:(id)url overwrite:(BOOL)overwrite useFallback:(BOOL)fallback sourceEntityDataPayloads:(id)payloads sourceEntityDataContentTypes:(id)types sourceEntityETags:(id)tags accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x3372c999
- (void)_completedMoveTask:(id)task sourceURL:(id)url;	// 0x3372d3b1
- (void)_completedPutTask:(id)task sourceURL:(id)url;	// 0x3372d845
- (id)_eTagFromTaskResponseHeaders:(id)taskResponseHeaders;	// 0x3372d38d
- (void)_setTagsForDestinationEntityAtURL:(id)url fromTaskResponseHeaders:(id)taskResponseHeaders completionBlock:(id)block;	// 0x3372d2f5
- (void)dealloc;	// 0x3372cd61
- (id)description;	// 0x3372ce3d
// declared property getter: - (id)destinationEntityETags;	// 0x3372dc91
// declared property getter: - (id)destinationURL;	// 0x3372dc31
// declared property getter: - (id)destinationURLs;	// 0x3372dca1
- (id)filenameFromURL:(id)url;	// 0x3372cf51
- (id)fullDestinationURLFromSourceURL:(id)sourceURL;	// 0x3372cefd
// declared property getter: - (id)outstandingSourceURLsToMove;	// 0x3372dcb1
// declared property getter: - (int)overwrite;	// 0x3372dc41
- (void)processOutstandingTasks;	// 0x3372cfe1
// declared property setter: - (void)setOutstandingSourceURLsToMove:(id)move;	// 0x3372dcc5
// declared property getter: - (id)sourceEntityDataContentTypes;	// 0x3372dc71
// declared property getter: - (id)sourceEntityDataPayloads;	// 0x3372dc61
// declared property getter: - (id)sourceEntityETags;	// 0x3372dc81
// declared property getter: - (id)sourceURLs;	// 0x3372dc21
- (void)startTaskGroup;	// 0x3372cf65
// declared property getter: - (BOOL)useFallback;	// 0x3372dc51
@end

