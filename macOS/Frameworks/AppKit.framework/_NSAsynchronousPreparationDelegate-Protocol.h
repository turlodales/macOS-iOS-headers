//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _NSAsynchronousPreparation;

@protocol _NSAsynchronousPreparationDelegate <NSObject>
- (void)asynchronousPreparationDidChangePreparedResult:(_NSAsynchronousPreparation *)arg1;
- (id)asynchronousPreparation:(_NSAsynchronousPreparation *)arg1 prepareResultUsingParameters:(id <_NSAsynchronousPreparationInputParameters>)arg2;
@end

