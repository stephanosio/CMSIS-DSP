#include "Test.h"
#include "Pattern.h"
class SupportQ31:public Client::Suite
    {
        public:
            SupportQ31(Testing::testID_t id);
            void setUp(Testing::testID_t,std::vector<Testing::param_t>& params,Client::PatternMgr *mgr);
            void tearDown(Testing::testID_t,Client::PatternMgr *mgr);
        private:
            #include "SupportQ31_decl.h"
            Client::Pattern<q31_t> samples;

            Client::Pattern<q15_t> samplesQ15;
            Client::Pattern<q7_t> samplesQ7;

            Client::LocalPattern<q31_t> output;
            
            int nbSamples;

            q31_t *pSrc;
            q15_t *pSrcQ15;
            q7_t *pSrcQ7;
            q31_t *pDst;
            
    };