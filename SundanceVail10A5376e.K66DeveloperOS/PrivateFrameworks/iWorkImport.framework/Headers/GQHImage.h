/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library


@interface GQHImage : NSObject {
}
+ (int)handleFloatingImageBinary:(id)binary geometry:(id)geometry style:(id)style crop:(id)crop maskPath:(id)path state:(id)state;	// 0x3582a909
+ (int)handleFloatingMedia:(id)media state:(id)state;	// 0x3582a535
+ (int)handleFloatingWebView:(id)view state:(id)state;	// 0x3582a66d
+ (int)handleInlineImageBinary:(id)binary geometry:(id)geometry cropGeometry:(id)geometry3 maskPath:(id)path style:(id)style state:(id)state;	// 0x3582accd
+ (int)handleInlineImageBinary:(id)binary geometry:(id)geometry style:(id)style state:(id)state;	// 0x3582ac95
+ (int)handleInlineMedia:(id)media state:(id)state;	// 0x3582a5d1
+ (int)handleInlineWebView:(id)view state:(id)state;	// 0x3582a6e1
+ (void)mapCrop:(id)crop bounds:(id)bounds style:(id)style;	// 0x3582a751
+ (void)mapMaskedImage:(id)image maskPath:(id)path geometry:(id)geometry crop:(id)crop graphicStyle:(id)style state:(id)state;	// 0x3582a889
@end

