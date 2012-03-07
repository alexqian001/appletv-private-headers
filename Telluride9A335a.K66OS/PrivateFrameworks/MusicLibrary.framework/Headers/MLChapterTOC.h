/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library


@interface MLChapterTOC : NSObject {
}
- (id)artworkCacheIDForChapterIndex:(unsigned)chapterIndex;	// 0x309b0779
- (id)artworkCacheIDForTimeInMS:(unsigned)ms;	// 0x309b0775
- (id)bestImageDataForSize:(CGSize)size chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x309b0781
- (ChapterData *)chapterDataRef;	// 0x309b0785
- (unsigned)chapterIndexAtTimeLocationInMS:(unsigned)ms;	// 0x309b06e5
- (unsigned)chapterIndexForGroupIndex:(unsigned)groupIndex groupingProperty:(int)property;	// 0x309b06d1
- (unsigned)countOfChapters;	// 0x309b06a9
- (unsigned)countOfGroupsForProperty:(int)property;	// 0x309b06cd
- (unsigned)durationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x309b06d9
- (unsigned)groupIndexAtTimeLocationInMS:(unsigned)ms groupingProperty:(int)property;	// 0x309b06dd
- (unsigned)groupIndexForChapterIndex:(unsigned)chapterIndex groupingProperty:(int)property;	// 0x309b06d5
- (BOOL)hasDataForProperty:(int)property;	// 0x309b06ad
- (id)imageDataForArtworkFormatID:(unsigned)artworkFormatID chapterIndex:(unsigned)index artworkInstanceInfo:(MLArtworkInstanceInfo *)info;	// 0x309b077d
- (unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)index;	// 0x309b0765
- (unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)index groupingProperty:(int)property;	// 0x309b06e1
- (id)titlePropertyOfChapterAtIndex:(unsigned)index;	// 0x309b0769
- (id)urlPropertyOfChapterAtIndex:(unsigned)index;	// 0x309b0771
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned)index;	// 0x309b076d
@end
