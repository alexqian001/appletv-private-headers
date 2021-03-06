/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSMutableCopying.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	NSArray *_sections;	// 4 = 0x4
	NSArray *_sectionIndexTitles;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x31a47af1; 
@property(copy, nonatomic) NSArray *sectionIndexTitles;	// G=0x31a47b51; S=0x31a47b61; @synthesize=_sectionIndexTitles
@property(readonly, assign, nonatomic) NSArray *sections;	// G=0x31a47b41; @synthesize=_sections
- (id)initWithCoder:(id)coder;	// 0x31a477bd
- (id)copyWithZone:(NSZone *)zone;	// 0x31a4773d
// declared property getter: - (unsigned)count;	// 0x31a47af1
- (void)dealloc;	// 0x31a476dd
- (id)description;	// 0x31a476bd
- (void)encodeWithCoder:(id)coder;	// 0x31a4784d
- (unsigned)indexOfSectionForSectionIndexTitleAtIndex:(unsigned)index;	// 0x31a47939
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31a478bd
// declared property getter: - (id)sectionIndexTitles;	// 0x31a47b51
// declared property getter: - (id)sections;	// 0x31a47b41
// declared property setter: - (void)setSectionIndexTitles:(id)titles;	// 0x31a47b61
@end

