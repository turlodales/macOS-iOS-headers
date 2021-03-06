/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPRequestedFields : PBCodable <NSCopying> {
    NSMutableArray * _fields;
}

@property (nonatomic, retain) NSMutableArray *fields;

+ (Class)fieldsType;

- (void)addFields:(id)arg1;
- (void)clearFields;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fields;
- (id)fieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFields:(id)arg1;
- (void)writeTo:(id)arg1;

@end
