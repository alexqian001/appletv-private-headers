/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDWorkbook, NSMutableArray;

@interface EDProcessors : NSObject {
	EDWorkbook *mWorkbook;	// 4 = 0x4
	NSMutableArray *mProcessors;	// 8 = 0x8
}
- (id)initWithWorkbook:(id)workbook;	// 0x34891bc1
- (void)addProcessorClass:(Class)aClass;	// 0x34891d45
- (void)applyProcessorsWithSheet:(id)sheet;	// 0x348b5b6d
- (void)dealloc;	// 0x348c08a9
- (bool)hasProcessors;	// 0x34a2b561
- (void)markObject:(id)object processor:(Class)processor;	// 0x3489f9e1
- (void)removeAllObjects;	// 0x34891d25
- (void)removeProcessorClass:(Class)aClass;	// 0x34a2b58d
@end

