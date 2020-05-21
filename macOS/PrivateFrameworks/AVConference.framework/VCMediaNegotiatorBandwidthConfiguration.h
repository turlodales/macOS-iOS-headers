//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorBandwidthConfiguration : NSObject
{
    int _mode;
    int _connectionType;
    unsigned int _maxBandwidth;
    BOOL _isDefaultMode;
}

@property(nonatomic) BOOL isDefaultMode; // @synthesize isDefaultMode=_isDefaultMode;
@property(nonatomic) unsigned int maxBandwidth; // @synthesize maxBandwidth=_maxBandwidth;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (BOOL)isEqual:(id)arg1;
- (id)initWithMode:(int)arg1 connectionType:(int)arg2 maxBandwidth:(unsigned int)arg3;
- (id)initWithConnectionType:(int)arg1 maxBandwidth:(unsigned int)arg2;

@end

