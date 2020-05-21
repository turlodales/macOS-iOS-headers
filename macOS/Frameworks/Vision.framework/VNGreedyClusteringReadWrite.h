//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNGreedyClusteringReadOnly.h>

#import "VNClusteringWritable.h"

__attribute__((visibility("hidden")))
@interface VNGreedyClusteringReadWrite : VNGreedyClusteringReadOnly <VNClusteringWritable>
{
    struct shared_ptr<vision::mod::FaceClustering> m_ClusteringImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getClustersWithOptions:(id)arg1 error:(id *)arg2;
- (long long)_cancellableUpdate:(struct ImageDescriptorBufferAbstract *)arg1 facesToMove:(vector_22dfb71c *)arg2 requestRevision:(unsigned long long)arg3;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;

@end

