//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKNode.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSColor, NSDictionary, NSString, SKShader, SKTileSet;

@interface SKTileMapNode : SKNode <NSCopying, NSSecureCoding>
{
    // Error parsing type: ^{SKCTileMapNode=^^?@B{unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > >={__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> >=f}}}@@^{SKCNode}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}@fB{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node_base<SKCAction *, void *>}^{__list_node_base<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node_base<SKCAction *, void *>}^{__list_node_base<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}B@{shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}IIBqffBB{?=[4]}{?=[4]}IB@QfIICCIIiiii{map<unsigned int, SKCTileMapNodeChunk *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SKCTileMapNodeChunk *> > >={__tree<std::__1::__value_type<unsigned int, SKCTileMapNodeChunk *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SKCTileMapNodeChunk *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, SKCTileMapNodeChunk *> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, SKCTileMapNodeChunk *>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, SKCTileMapNodeChunk *>, std::__1::less<unsigned int>, true> >=Q}}}}, name: _skcTileMapNode
    SKTileSet *_tileSet;
    struct CGSize _tileSize;
    // Error parsing type: , name: _isoOrigin
    // Error parsing type: , name: _isoColumnVector
    // Error parsing type: , name: _isoRowVector
    float _isoColumnWidth;
    float _isoRowHeight;
    float _isoHeightScalar;
    float _hexRadius;
    BOOL _enableAutomapping;
    NSString *_tileSetName;
}

+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 tileGroupLayout:(id)arg5;
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 fillWithTileGroup:(id)arg5;
+ (id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tileSetName; // @synthesize tileSetName=_tileSetName;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (id)valueForAttributeNamed:(id)arg1;
- (void)forceRedraw;
- (BOOL)shouldUnarchiveTileSet;
- (id)tileDefinitionForTileID:(unsigned int)arg1;
- (void)applyTileStamp:(id)arg1 inColumn:(long long)arg2 row:(long long)arg3;
- (id)createTileStampFromColumn:(unsigned long long)arg1 row:(unsigned long long)arg2 withWidth:(unsigned long long)arg3 height:(unsigned long long)arg4 addToTileSet:(BOOL)arg5;
- (struct CGPoint)centerOfTileAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2;
- (unsigned long long)tileRowIndexFromPosition:(struct CGPoint)arg1;
- (unsigned long long)tileColumnIndexFromPosition:(struct CGPoint)arg1;
- (void)calculateSize;
- (void)setColumns:(unsigned long long)arg1 andRows:(long long)arg2;
- (void)updateTileGroupsAtX:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (void)updateTileDefinitionWithoutAutomappingAtX:(unsigned long long)arg1 y:(unsigned long long)arg2;
- (void)rebuildTileSprites;
- (void)removeAllTiles;
- (void)getTileModifiedData:(long long *)arg1 outMinRowModified:(long long *)arg2 outMaxColumnModified:(long long *)arg3 outmaxRowModified:(long long *)arg4;
- (void)clearModifiedTileTracking;
- (void)setTilesFromArray:(unsigned int *)arg1 fromColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 forWidth:(unsigned long long)arg4 height:(unsigned long long)arg5;
- (void)setTilesFromArray:(unsigned int *)arg1;
- (void)fillArray:(unsigned int *)arg1 withTilesFromColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 forWidth:(unsigned long long)arg4 height:(unsigned long long)arg5;
- (void)fillArrayWithTiles:(unsigned int *)arg1;
- (void)validateAllTiles;
- (void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forTileIndicies:(id)arg3;
- (void)setTileGroup:(id)arg1 forTileIndicies:(id)arg2;
- (void)setTileGroupWithoutUpdate:(id)arg1 tileDefinition:(id)arg2 forColumn:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)setTileGroupWithoutUpdate:(id)arg1 forColumn:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forColumn:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)setTileGroup:(id)arg1 forColumn:(unsigned long long)arg2 row:(unsigned long long)arg3;
- (id)tileGroupAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2;
- (id)tileDefinitionAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2;
- (void)fillWithTileGroup:(id)arg1;
- (void)fillWithTileDefinition:(id)arg1;
- (unsigned int)getTileIDWithTileGroup:(id)arg1 andTileDefinition:(id)arg2;
- (void)dealloc;
- (id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 tileGroupLayout:(id)arg5;
- (id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4 fillWithTileGroup:(id)arg5;
- (id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(struct CGSize)arg4;
- (id)init;
- (void)setStartData:(unsigned long long)arg1 rows:(unsigned long long)arg2 tileSize:(struct CGSize)arg3 tileSet:(id)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)setRawTiles:(unsigned int *)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3;
- (BOOL)isEqualToNode:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)setAlpha:(double)arg1;
- (double)alpha;
@property(nonatomic) BOOL enableAutomapping;
- (void)_didMakeBackingNode;
-     // Error parsing type: ^{SKCNode=^^?@B{unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > >={__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> >=f}}}@@^{SKCNode}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}@fB{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node_base<SKCAction *, void *>}^{__list_node_base<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node_base<SKCAction *, void *>}^{__list_node_base<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}B@{shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}IIBqffBB{?=[4]}{?=[4]}}16@0:8, name: _makeBackingNode
@property(nonatomic) unsigned int lightingBitMask;
@property(retain, nonatomic) SKShader *shader;
@property(nonatomic) struct CGPoint anchorPoint;
@property(nonatomic) long long blendMode;
@property(retain, nonatomic) NSColor *color;
@property(nonatomic) double colorBlendFactor;
@property(retain, nonatomic) SKTileSet *tileSet;
@property(readonly, nonatomic) struct CGSize mapSize;
@property(nonatomic) struct CGSize tileSize;
@property(nonatomic) unsigned long long numberOfRows;
@property(nonatomic) unsigned long long numberOfColumns;

// Remaining properties
@property(copy, nonatomic) NSDictionary *attributeValues; // @dynamic attributeValues;

@end

