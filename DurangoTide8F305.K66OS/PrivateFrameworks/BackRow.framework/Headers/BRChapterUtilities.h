/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BackRow-Structs.h"


@interface BRChapterUtilities : NSObject {
}
+ (unsigned)chapterGroupCountForMediaAsset:(id)mediaAsset;	// 0x32a2baad
+ (unsigned)chapterGroupCountForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x32a2b4cd
+ (id)mediaAsset:(id)asset chapterGroupAtIndex:(unsigned)index;	// 0x32a2ba25
+ (BOOL)mediaAsset:(id)asset hasChapterGroupAtIndex:(unsigned)index;	// 0x32a2ba69
+ (id)mediaItem:(ATVMediaItemRef)item chapterGroupAtIndex:(unsigned)index;	// 0x32a2b4d5
+ (BOOL)mediaItem:(ATVMediaItemRef)item hasChapterGroupAtIndex:(unsigned)index;	// 0x32a2b4d1
@end

