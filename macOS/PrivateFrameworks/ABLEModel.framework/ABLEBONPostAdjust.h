//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABLEStaticMapInclusiveDomainVectorRange;

@interface ABLEBONPostAdjust : NSObject
{
    ABLEStaticMapInclusiveDomainVectorRange *_bonPostAdjustDoubleMap;
}

+ (id)bonPostAdjustWithArray:(id)arg1;
+ (id)bonPostAdjust;
+ (id)bonPostAdjustWithJSONResource:(id)arg1;
@property(retain) ABLEStaticMapInclusiveDomainVectorRange *bonPostAdjustDoubleMap; // @synthesize bonPostAdjustDoubleMap=_bonPostAdjustDoubleMap;
- (void).cxx_destruct;
- (unsigned long long)adjustBON:(unsigned long long)arg1 forLevel:(float)arg2;
- (id)initBonPostAdjustWithJSONResource:(id)arg1;
- (id)initBonPostAdjustWithDoubleMap:(id)arg1;
- (id)initBonPostAdjustWithArray:(id)arg1;

@end

