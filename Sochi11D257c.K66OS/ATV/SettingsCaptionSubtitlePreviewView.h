/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "SettingsPreviewView.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SettingsCaptionSubtitlePreviewView : SettingsPreviewView {
	OpaqueFigSubtitleRenderer *_subtitleRenderer;	// 140 = 0x8c
	NSString *text;	// 144 = 0x90
}
@property(retain, nonatomic) NSString *text;	// G=0x2e2b6d; S=0x2e2b7d; @synthesize
- (id)init;	// 0x2e2829
- (void).cxx_destruct;	// 0x2e2ba5
- (void)dealloc;	// 0x2e288d
// declared property setter: - (void)setText:(id)text;	// 0x2e2b7d
// declared property getter: - (id)text;	// 0x2e2b6d
- (void)updateCaptionPreview;	// 0x2e28d1
@end
