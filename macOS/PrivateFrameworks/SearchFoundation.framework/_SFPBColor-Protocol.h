//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, _SFPBGraphicalFloat;

@protocol _SFPBColor <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(retain, nonatomic) _SFPBGraphicalFloat *alphaComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *blueComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *greenComponent;
@property(retain, nonatomic) _SFPBGraphicalFloat *redComponent;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

