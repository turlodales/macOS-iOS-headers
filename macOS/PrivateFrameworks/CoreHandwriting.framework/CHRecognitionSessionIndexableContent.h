//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CHRecognitionSessionIndexableContent : NSObject
{
    NSString *_indexableTextRepresentation;
    NSString *_presentableTextRepresentation;
}

@property(readonly, copy, nonatomic) NSString *presentableTextRepresentation; // @synthesize presentableTextRepresentation=_presentableTextRepresentation;
@property(readonly, copy, nonatomic) NSString *indexableTextRepresentation; // @synthesize indexableTextRepresentation=_indexableTextRepresentation;
- (void)dealloc;
- (id)initWithIndexableTextRepresentation:(id)arg1 presentableTextRepresentation:(id)arg2;

@end

