/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDWifiFingerprint : PBCodable <NSCopying> {
    unsigned int  _confidence;
    struct { 
        unsigned int has_confidence : 1; 
        unsigned int has_labelType : 1; 
        unsigned int has_status : 1; 
    }  _flags;
    int  _labelType;
    int  _status;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int confidence;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasLabelType;
@property (nonatomic) bool hasStatus;
@property (nonatomic) int labelType;
@property (nonatomic) int status;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsLabelType:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (unsigned int)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfidence;
- (bool)hasLabelType;
- (bool)hasStatus;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)labelType;
- (id)labelTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(unsigned int)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasLabelType:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setLabelType:(int)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
