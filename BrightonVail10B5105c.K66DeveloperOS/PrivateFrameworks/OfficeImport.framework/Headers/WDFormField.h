/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class NSString;

@interface WDFormField : WDRun {
	unsigned long mPosition;	// 8 = 0x8
	BOOL mLinkAbsolute;	// 12 = 0xc
	BOOL mLinkSpecifyingNamedLocation;	// 13 = 0xd
	NSString *mNamedLocation;	// 16 = 0x10
	NSString *mURI;	// 20 = 0x14
	NSString *mMacName;	// 24 = 0x18
	NSString *mDosName;	// 28 = 0x1c
}
@property(retain) id URI;	// G=0x37b53cc5; S=0x37b53cd5; converted property
@property(retain) id dosName;	// G=0x37b53d5d; S=0x37b53d6d; converted property
@property(assign) BOOL linkAbsolute;	// G=0x37b53c39; S=0x37b53c49; converted property
@property(assign) BOOL linkSpecifyingNamedLocation;	// G=0x37b53c59; S=0x37b53c69; converted property
@property(retain) id macName;	// G=0x37b53d11; S=0x37b53d21; converted property
@property(retain) id namedLocation;	// G=0x37b53c79; S=0x37b53c89; converted property
@property(assign) unsigned long position;	// G=0x37b53c19; S=0x37b53c29; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x37b53b61
// converted property getter: - (id)URI;	// 0x37b53cc5
- (void)dealloc;	// 0x37b53b8d
// converted property getter: - (id)dosName;	// 0x37b53d5d
// converted property getter: - (BOOL)linkAbsolute;	// 0x37b53c39
// converted property getter: - (BOOL)linkSpecifyingNamedLocation;	// 0x37b53c59
// converted property getter: - (id)macName;	// 0x37b53d11
// converted property getter: - (id)namedLocation;	// 0x37b53c79
// converted property getter: - (unsigned long)position;	// 0x37b53c19
- (int)runType;	// 0x37b53da9
// converted property setter: - (void)setDosName:(id)name;	// 0x37b53d6d
// converted property setter: - (void)setLinkAbsolute:(BOOL)absolute;	// 0x37b53c49
// converted property setter: - (void)setLinkSpecifyingNamedLocation:(BOOL)location;	// 0x37b53c69
// converted property setter: - (void)setMacName:(id)name;	// 0x37b53d21
// converted property setter: - (void)setNamedLocation:(id)location;	// 0x37b53c89
// converted property setter: - (void)setPosition:(unsigned long)position;	// 0x37b53c29
// converted property setter: - (void)setURI:(id)uri;	// 0x37b53cd5
@end
