/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSProperty.h"

@class NSString;

@interface ICSConference : ICSProperty {
}
@property(retain) NSString *feature;	// G=0x36868f01; S=0x36868f21; 
@property(retain) NSString *info;	// G=0x36868f41; S=0x36868f61; 
@property(retain) NSString *language;	// G=0x36868f81; S=0x36868fa1; 
@property(retain) NSString *region;	// G=0x36868fc1; S=0x36868fe1; 
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x3684559d
// declared property getter: - (id)feature;	// 0x36868f01
// declared property getter: - (id)info;	// 0x36868f41
// declared property getter: - (id)language;	// 0x36868f81
// declared property getter: - (id)region;	// 0x36868fc1
// declared property setter: - (void)setFeature:(id)feature;	// 0x36868f21
// declared property setter: - (void)setInfo:(id)info;	// 0x36868f61
// declared property setter: - (void)setLanguage:(id)language;	// 0x36868fa1
// declared property setter: - (void)setRegion:(id)region;	// 0x36868fe1
@end
