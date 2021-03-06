/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRXMLNode.h"

@class BRXMLElement;

__attribute__((visibility("hidden")))
@interface BRXMLDocument : BRXMLNode {
	BRXMLElement *_rootElement;	// 4 = 0x4
}
@property(retain, nonatomic) BRXMLElement *rootElement;	// G=0x37f691; S=0x37f81d; 
- (id)init;	// 0x37f415
- (id)initWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x37f045
- (id)initWithRootElement:(id)rootElement;	// 0x37f441
- (id)initWithXMLString:(id)xmlstring options:(unsigned)options error:(id *)error;	// 0x37f60d
- (id)XMLData;	// 0x37f9d5
- (void)dealloc;	// 0x37f645
- (id)elementById:(id)anId;	// 0x169689
- (id)makeElementNamed:(id)named;	// 0x37fb65
// declared property getter: - (id)rootElement;	// 0x37f691
// declared property setter: - (void)setRootElement:(id)element;	// 0x37f81d
@end

