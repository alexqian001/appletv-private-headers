/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVMediaOption.h"

@class NSString, AVMediaSelectionOption;

__attribute__((visibility("hidden")))
@interface ATVAudioOption : XXUnknownSuperclass <ATVMediaOption> {
	AVMediaSelectionOption *_selectionOption;	// 4 = 0x4
	NSString *_ac3SuffixString;	// 8 = 0x8
}
+ (id)audioOptionFromOption:(id)option;	// 0x221561
- (id)initWithOption:(id)option;	// 0x22159d
- (id)_selectionOption;	// 0x221941
- (void)dealloc;	// 0x221631
- (BOOL)isEqual:(id)equal;	// 0x221695
- (id)languageCode;	// 0x22178d
- (id)locale;	// 0x22176d
- (id)localizedDisplayString;	// 0x2217d1
- (id)localizedDisplayStringForIdentifier;	// 0x221889
- (void)saveToDiskForMediaAsset:(id)mediaAsset;	// 0x221711
@end

