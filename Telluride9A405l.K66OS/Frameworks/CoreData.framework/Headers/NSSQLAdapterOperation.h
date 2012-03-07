/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSSQLRow, NSSQLCorrelation;

__attribute__((visibility("hidden")))
@interface NSSQLAdapterOperation : NSObject {
@private
	unsigned _adapterOperator;	// 4 = 0x4
	NSSQLRow *_row;	// 8 = 0x8
	NSSQLCorrelation *_correlation;	// 12 = 0xc
}
@property(assign) unsigned adapterOperator;	// G=0x33fe3729; S=0x33fe3739; converted property
@property(readonly, retain) NSSQLCorrelation *correlation;	// G=0x33fe3749; converted property
@property(readonly, retain) NSSQLRow *row;	// G=0x33fe3759; converted property
- (id)initWithAdapterOperator:(unsigned)adapterOperator correlation:(id)correlation;	// 0x33fe3a49
- (id)initWithAdapterOperator:(unsigned)adapterOperator row:(id)row;	// 0x33fe37e5
- (id)_opString;	// 0x33fe3769
// converted property getter: - (unsigned)adapterOperator;	// 0x33fe3729
- (int)compareAdapterOperation:(id)operation;	// 0x33fe38dd
// converted property getter: - (id)correlation;	// 0x33fe3749
- (void)dealloc;	// 0x33fe39e9
- (id)description;	// 0x33fe384d
- (id)entity;	// 0x33fe3985
// converted property getter: - (id)row;	// 0x33fe3759
// converted property setter: - (void)setAdapterOperator:(unsigned)anOperator;	// 0x33fe3739
@end
