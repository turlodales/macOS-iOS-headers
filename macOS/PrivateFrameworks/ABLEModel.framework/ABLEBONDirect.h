//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABLEStaticMapInclusiveDomainVectorRange, NSArray;

@interface ABLEBONDirect : NSObject
{
    NSArray *_bonArray;
    ABLEStaticMapInclusiveDomainVectorRange *_bonDoubleMap;
}

+ (id)bonDirectWithArray:(id)arg1;
+ (id)bonDirect;
@property(retain) ABLEStaticMapInclusiveDomainVectorRange *bonDoubleMap; // @synthesize bonDoubleMap=_bonDoubleMap;
@property(readonly) NSArray *bonArray; // @synthesize bonArray=_bonArray;
- (void).cxx_destruct;
- (float)lookupForBatteryLevel:(float)arg1;
- (id)initWithJsonResource:(id)arg1;
- (id)initBonDirectWithArray:(id)arg1;

@end

