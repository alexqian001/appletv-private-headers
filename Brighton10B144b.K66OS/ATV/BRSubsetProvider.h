/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRSubsetProvider : XXUnknownSuperclass <BRProvider> {
	id _provider;	// 4 = 0x4
	int _dataLimit;	// 8 = 0x8
}
@property(assign) int dataLimit;	// G=0x3650f9; S=0x3650d5; converted property
+ (id)providerWithProvider:(id)provider;	// 0x364d45
+ (id)providerWithProvider:(id)provider dataLimit:(int)limit;	// 0x364d59
- (id)initWithProvider:(id)provider dataLimit:(int)limit;	// 0x364bc5
- (void)_providerUpdated:(id)updated;	// 0x365109
- (id)controlFactory;	// 0x364da9
- (id)dataAtIndex:(long)index;	// 0x364ead
- (long)dataCount;	// 0x364dc9
// converted property getter: - (int)dataLimit;	// 0x3650f9
- (void)dealloc;	// 0x364cc9
- (id)hashForDataAtIndex:(long)index;	// 0x364fc1
// converted property setter: - (void)setDataLimit:(int)limit;	// 0x3650d5
@end

