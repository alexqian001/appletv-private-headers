/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import </libobjc.A.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RTFNSFont : NSObject {
	NSString *_fontName;	// 4 = 0x4
	float _fontSize;	// 8 = 0x8
	float _pointSize;	// 12 = 0xc
}
@property(retain) NSString *fontName;	// G=0x2f2f7ced; S=0x2f2f7d01; @synthesize=_fontName
@property(assign) float fontSize;	// G=0x2f2f7d11; S=0x2f2f7d25; @synthesize=_fontSize
@property(assign) float pointSize;	// G=0x2f2f7d3d; S=0x2f2f7d51; @synthesize=_pointSize
+ (id)fontWithName:(id)name size:(float)size;	// 0x2f2f7b65
+ (id)systemFontOfSize:(float)size;	// 0x2f2f7b61
+ (id)userFixedPitchFontOfSize:(float)size;	// 0x2f2f7b59
+ (id)userFontOfSize:(float)size;	// 0x2f2f7b5d
- (id)initWithName:(id)name size:(float)size;	// 0x2f2f7c7d
// declared property getter: - (id)fontName;	// 0x2f2f7ced
// declared property getter: - (float)fontSize;	// 0x2f2f7d11
- (unsigned)mostCompatibleStringEncoding;	// 0x2f2f7ce9
// declared property getter: - (float)pointSize;	// 0x2f2f7d3d
// declared property setter: - (void)setFontName:(id)name;	// 0x2f2f7d01
// declared property setter: - (void)setFontSize:(float)size;	// 0x2f2f7d25
// declared property setter: - (void)setPointSize:(float)size;	// 0x2f2f7d51
@end

