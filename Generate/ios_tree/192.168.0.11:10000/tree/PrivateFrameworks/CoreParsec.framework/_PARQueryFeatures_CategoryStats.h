/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _PARQueryFeatures_CategoryStats : PBCodable <NSSecureCoding, _PARQueryFeatures_CategoryStats> {
    NSString * _bundleId;
    float  _score;
}

@property (nonatomic, copy) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float score;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleId;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (float)score;
- (void)setBundleId:(id)arg1;
- (void)setScore:(float)arg1;
- (void)writeTo:(id)arg1;

@end
