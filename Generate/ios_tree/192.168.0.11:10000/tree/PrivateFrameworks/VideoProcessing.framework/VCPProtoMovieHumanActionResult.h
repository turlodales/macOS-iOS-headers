/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoMovieHumanActionResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _absoluteScore;
    float  _humanScore;
    float  _relativeScore;
    VCPProtoTimeRange * _timeRange;
}

@property (nonatomic) float absoluteScore;
@property (nonatomic) float humanScore;
@property (nonatomic) float relativeScore;
@property (nonatomic, retain) VCPProtoTimeRange *timeRange;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (float)absoluteScore;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (float)humanScore;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (float)relativeScore;
- (void)setAbsoluteScore:(float)arg1;
- (void)setHumanScore:(float)arg1;
- (void)setRelativeScore:(float)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (void)writeTo:(id)arg1;

@end
