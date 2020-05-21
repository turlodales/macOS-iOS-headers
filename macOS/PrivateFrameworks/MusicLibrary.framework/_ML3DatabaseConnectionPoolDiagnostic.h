//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMutableCopying.h"

@class NSArray;

@interface _ML3DatabaseConnectionPoolDiagnostic : NSObject <NSMutableCopying>
{
    NSArray *_readerAvailableConnections;
    NSArray *_readerBusyConnections;
    NSArray *_writerAvailableConnections;
    NSArray *_writerBusyConnections;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *writerBusyConnections; // @synthesize writerBusyConnections=_writerBusyConnections;
@property(readonly, nonatomic) NSArray *writerAvailableConnections; // @synthesize writerAvailableConnections=_writerAvailableConnections;
@property(readonly, nonatomic) NSArray *readerBusyConnections; // @synthesize readerBusyConnections=_readerBusyConnections;
@property(readonly, nonatomic) NSArray *readerAvailableConnections; // @synthesize readerAvailableConnections=_readerAvailableConnections;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

