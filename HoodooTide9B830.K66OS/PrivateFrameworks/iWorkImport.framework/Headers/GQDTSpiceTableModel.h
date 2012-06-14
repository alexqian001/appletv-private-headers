/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDTTableModel.h"


__attribute__((visibility("hidden")))
@interface GQDTSpiceTableModel : GQDTTableModel {
}
+ (const StateSpec *)stateForReading;	// 0x317b6339
- (CFArrayRef)createSizeArrayFromPositionVector:(vector<float,std::allocator<float> > *)positionVector;	// 0x317b693d
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x317b67cd
- (int)setColumnWidthsFromState:(id)state;	// 0x317b68e1
- (int)setRowHeightsFromState:(id)state;	// 0x317b6885
@end
