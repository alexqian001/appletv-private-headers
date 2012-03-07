/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import <NSObject.h> // Unknown library

@class DAVXMLNode, NSMutableArray, NSMutableData;

@interface DAVXMLTree : NSObject {
	DAVXMLNode *root;	// 4 = 0x4
	NSMutableArray *stack;	// 8 = 0x8
	NSMutableData *contentData;	// 12 = 0xc
}
@property(readonly, retain) DAVXMLNode *root;	// G=0x32db12a1; converted property
+ (id)treeWithXMLData:(id)xmldata;	// 0x32db12b1
- (id)initWithXMLData:(id)xmldata;	// 0x32db1731
- (void)_data:(const char *)data len:(int)len;	// 0x32db1341
- (void)_endelement:(const char *)endelement;	// 0x32db13ad
- (void)_startelement:(const char *)startelement attributes:(const char **)attributes;	// 0x32db14b9
- (void)dealloc;	// 0x32db16e9
// converted property getter: - (id)root;	// 0x32db12a1
@end
