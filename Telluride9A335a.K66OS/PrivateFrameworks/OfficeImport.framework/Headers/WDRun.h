/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDParagraph;

__attribute__((visibility("hidden")))
@interface WDRun : NSObject {
@private
	WDParagraph *mParagraph;	// 4 = 0x4
}
- (id)init;	// 0x353b8749
- (id)initWithParagraph:(id)paragraph;	// 0x35259c19
- (void)clearProperties;	// 0x353b8745
- (void)dealloc;	// 0x351c8cc1
- (BOOL)isEmpty;	// 0x353b8741
- (id)paragraph;	// 0x351c394d
- (int)runType;	// 0x353b873d
@end

