//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AVCAudioStreamConfig : NSObject
{
    long long _codecType;
    BOOL _cnEnabled;
    unsigned long long _cnPayloadType;
    unsigned long long _dtmfPayloadType;
    unsigned long long _dtmfTimestampRate;
    unsigned long long _ptime;
    unsigned long long _maxPtime;
    unsigned long long _channelAwareOffset;
    long long _audioStreamMode;
    unsigned int _codecRateModeMask;
    long long _preferredCodecRateMode;
    BOOL _octetAligned;
    BOOL _headerFullOnly;
    BOOL _dtxEnabled;
    BOOL _latencySensitiveMode;
    BOOL _enableMaxBitrateOnNoChangeCMR;
    unsigned long long _numRedundantPayloads;
    unsigned long long _txRedPayloadType;
    unsigned long long _rxRedPayloadType;
    float _volume;
}

+ (long long)clientCodecRateModeForCodecRateMode:(int)arg1;
+ (int)codecRateModeForClientCodecRateMode:(long long)arg1;
+ (unsigned int)clientCodecRateMaskForCodecRateMode:(unsigned int)arg1;
+ (unsigned int)codecRateMaskForClientCodecRateMode:(unsigned int)arg1;
+ (long long)clientStreamModeWithStreamMode:(long long)arg1;
+ (long long)streamModeWithClientStreamMode:(long long)arg1;
+ (long long)clientCodecTypeWithCodecType:(long long)arg1;
+ (long long)codecTypeWithClientCodecType:(long long)arg1;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) BOOL enableMaxBitrateOnNoChangeCMR; // @synthesize enableMaxBitrateOnNoChangeCMR=_enableMaxBitrateOnNoChangeCMR;
@property(nonatomic) unsigned long long rxRedPayloadType; // @synthesize rxRedPayloadType=_rxRedPayloadType;
@property(nonatomic) unsigned long long txRedPayloadType; // @synthesize txRedPayloadType=_txRedPayloadType;
@property(nonatomic) unsigned long long numRedundantPayloads; // @synthesize numRedundantPayloads=_numRedundantPayloads;
@property(nonatomic, getter=isLatencySensitiveMode) BOOL latencySensitiveMode; // @synthesize latencySensitiveMode=_latencySensitiveMode;
@property(nonatomic) long long preferredCodecRateMode; // @synthesize preferredCodecRateMode=_preferredCodecRateMode;
@property(nonatomic) unsigned int codecRateModeMask; // @synthesize codecRateModeMask=_codecRateModeMask;
@property(nonatomic, getter=isDTXEnabled) BOOL dtxEnabled; // @synthesize dtxEnabled=_dtxEnabled;
@property(nonatomic, getter=isHeaderFullOnly) BOOL headerFullOnly; // @synthesize headerFullOnly=_headerFullOnly;
@property(nonatomic, getter=isOctectAligned) BOOL octetAligned; // @synthesize octetAligned=_octetAligned;
@property(nonatomic) unsigned long long channelAwareOffset; // @synthesize channelAwareOffset=_channelAwareOffset;
@property(nonatomic) unsigned long long maxPtime; // @synthesize maxPtime=_maxPtime;
@property(nonatomic) unsigned long long ptime; // @synthesize ptime=_ptime;
@property(nonatomic) unsigned long long dtmfTimestampRate; // @synthesize dtmfTimestampRate=_dtmfTimestampRate;
@property(nonatomic) unsigned long long dtmfPayloadType; // @synthesize dtmfPayloadType=_dtmfPayloadType;
@property(nonatomic) unsigned long long cnPayloadType; // @synthesize cnPayloadType=_cnPayloadType;
@property(nonatomic, getter=isCNEnabled) BOOL cnEnabled; // @synthesize cnEnabled=_cnEnabled;
@property(nonatomic) long long codecType; // @synthesize codecType=_codecType;
@property(nonatomic) long long audioStreamMode; // @synthesize audioStreamMode=_audioStreamMode;
- (id)dictionary;
- (void)setUpWithDictionary:(id)arg1;
- (BOOL)isRedValid;
- (BOOL)isCNValid;
- (BOOL)isDTMFValid;
- (BOOL)isValid;
- (id)init;

@end

