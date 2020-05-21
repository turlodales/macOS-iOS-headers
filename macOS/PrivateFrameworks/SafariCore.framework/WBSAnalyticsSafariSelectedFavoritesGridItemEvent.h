//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface WBSAnalyticsSafariSelectedFavoritesGridItemEvent : PBCodable <NSCopying>
{
    unsigned long long _itemsPerRow;
    unsigned long long _row;
    unsigned long long _sectionIndex;
    unsigned long long _timestamp;
    int _displayContext;
    int _section;
    int _type;
    struct {
        unsigned int itemsPerRow:1;
        unsigned int row:1;
        unsigned int sectionIndex:1;
        unsigned int timestamp:1;
        unsigned int displayContext:1;
        unsigned int section:1;
        unsigned int type:1;
    } _has;
}

@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) unsigned long long itemsPerRow; // @synthesize itemsPerRow=_itemsPerRow;
@property(nonatomic) unsigned long long row; // @synthesize row=_row;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsSection:(id)arg1;
- (id)sectionAsString:(int)arg1;
@property(nonatomic) BOOL hasSection;
@property(nonatomic) int section; // @synthesize section=_section;
- (int)StringAsDisplayContext:(id)arg1;
- (id)displayContextAsString:(int)arg1;
@property(nonatomic) BOOL hasDisplayContext;
@property(nonatomic) int displayContext; // @synthesize displayContext=_displayContext;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) BOOL hasSectionIndex;
@property(nonatomic) BOOL hasItemsPerRow;
@property(nonatomic) BOOL hasRow;
@property(nonatomic) BOOL hasTimestamp;

@end

