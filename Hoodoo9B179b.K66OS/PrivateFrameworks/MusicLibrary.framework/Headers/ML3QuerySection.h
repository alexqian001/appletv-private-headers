/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"


@interface ML3QuerySection : NSObject {
@private
	NSRange _range;	// 4 = 0x4
	unsigned _sectionIndex;	// 12 = 0xc
}
@property(assign, nonatomic) NSRange range;	// G=0x30011465; S=0x3001100d; @synthesize=_range
@property(assign, nonatomic) unsigned sectionIndex;	// G=0x30011021; S=0x30010ffd; @synthesize=_sectionIndex
- (void)dealloc;	// 0x30011481
- (id)description;	// 0x300354b5
// declared property getter: - (NSRange)range;	// 0x30011465
// declared property getter: - (unsigned)sectionIndex;	// 0x30011021
// declared property setter: - (void)setRange:(NSRange)range;	// 0x3001100d
// declared property setter: - (void)setSectionIndex:(unsigned)index;	// 0x30010ffd
@end

