/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import "RemoteUI-Structs.h"
#import </libobjc.A.h>

@class NSDictionary;

@interface RUIElement : NSObject {
	NSDictionary *_attributes;	// 4 = 0x4
}
@property(retain, nonatomic) NSDictionary *attributes;	// G=0x32693a65; S=0x32693a75; @synthesize=_attributes
- (id)URLAttributeForImageName:(id)imageName getScale:(float *)scale;	// 0x326933d5
- (int)_horizontalAlignmentForString:(id)string;	// 0x3269356d
// declared property getter: - (id)attributes;	// 0x32693a65
- (void)dealloc;	// 0x32693345
- (void)imageLoaded:(id)loaded;	// 0x32693619
- (BOOL)loadImage;	// 0x3269372d
- (void)populatePostbackDictionary:(id)dictionary;	// 0x32693341
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x32693a75
- (void)setImage:(id)image;	// 0x32693a59
- (void)setImageAlignment:(int)alignment;	// 0x32693a61
- (void)setImageSize:(CGSize)size;	// 0x32693a5d
- (id)sourceURL;	// 0x326933d1
@end
