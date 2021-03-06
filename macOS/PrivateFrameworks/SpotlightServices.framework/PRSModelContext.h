//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PRSDirectivesManager, SSCoreMLInterface;

@interface PRSModelContext : NSObject
{
    unsigned long long _type;
    SSCoreMLInterface *_model;
    PRSDirectivesManager *_directivesManager;
    NSString *_version;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) PRSDirectivesManager *directivesManager; // @synthesize directivesManager=_directivesManager;
@property(retain, nonatomic) SSCoreMLInterface *model; // @synthesize model=_model;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithModel:(id)arg1 directivesManager:(id)arg2 type:(unsigned long long)arg3;

@end

