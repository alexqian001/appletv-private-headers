/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVCupidPhotoBatch : XXUnknownSuperclass {
	NSMutableArray *_photos;	// 4 = 0x4
	NSDate *_modifiedDate;	// 8 = 0x8
	int _selectedIndex;	// 12 = 0xc
	NSString *_ID;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *ID;	// G=0x38a715; S=0x38a725; @synthesize=_ID
@property(retain, nonatomic) NSDate *modifiedDate;	// G=0x38a6bd; S=0x38a6cd; @synthesize=_modifiedDate
@property(retain, nonatomic) NSMutableArray *photos;	// G=0x38a685; S=0x38a695; @synthesize=_photos
@property(assign, nonatomic) int selectedIndex;	// G=0x38a6f5; S=0x38a705; @synthesize=_selectedIndex
- (void).cxx_destruct;	// 0x38a74d
// declared property getter: - (id)ID;	// 0x38a715
// declared property getter: - (id)modifiedDate;	// 0x38a6bd
// declared property getter: - (id)photos;	// 0x38a685
// declared property getter: - (int)selectedIndex;	// 0x38a6f5
// declared property setter: - (void)setID:(id)anId;	// 0x38a725
// declared property setter: - (void)setModifiedDate:(id)date;	// 0x38a6cd
// declared property setter: - (void)setPhotos:(id)photos;	// 0x38a695
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x38a705
@end
