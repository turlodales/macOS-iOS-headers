//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSDictionary;

@interface DGFusionOperation : DGOperation
{
    NSDictionary *_alignmentParams;
}

+ (id)attributes;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *alignmentParams; // @synthesize alignmentParams=_alignmentParams;
- (id)settingsDictionary;
- (BOOL)applySettingsDictionary:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (BOOL)isMigratable;

@end

