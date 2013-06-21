/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <NSObject.h> // Unknown library

@class WebBookmark, WebBookmarkCollection;

__attribute__((visibility("hidden")))
@interface BABookmarkItem : NSObject {
	WebBookmarkCollection *_collection;	// 4 = 0x4
	WebBookmark *_bookmark;	// 8 = 0x8
}
@property(retain, nonatomic) WebBookmark *bookmark;	// G=0x35c40741; S=0x35c40751; @synthesize=_bookmark
@property(readonly, assign, nonatomic) WebBookmarkCollection *collection;	// G=0x35c40731; @synthesize=_collection
- (id)initWithBookmarkCollection:(id)bookmarkCollection bookmark:(id)bookmark;	// 0x35c4060d
// declared property getter: - (id)bookmark;	// 0x35c40741
// declared property getter: - (id)collection;	// 0x35c40731
- (void)dealloc;	// 0x35c406cd
- (id)description;	// 0x35c40685
// declared property setter: - (void)setBookmark:(id)bookmark;	// 0x35c40751
@end
