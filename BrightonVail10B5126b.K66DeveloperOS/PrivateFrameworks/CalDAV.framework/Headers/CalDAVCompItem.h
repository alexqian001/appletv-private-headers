/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSString;

@interface CalDAVCompItem : CoreDAVItem {
	NSString *_nameAttribute;	// 28 = 0x1c
}
@property(retain) NSString *nameAttribute;	// G=0x33587aa9; S=0x33587abd; @synthesize=_nameAttribute
- (id)init;	// 0x3358782d
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x33587859
- (void)dealloc;	// 0x335878a1
// declared property getter: - (id)nameAttribute;	// 0x33587aa9
- (void)parserFoundAttributes:(id)attributes;	// 0x335878e5
// declared property setter: - (void)setNameAttribute:(id)attribute;	// 0x33587abd
- (void)write:(id)write;	// 0x335879f9
@end
