/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.12 $ of : mfd-data-access.m2c,v $
 *
 * $Id$
 */
#ifndef IPSYSTEMSTATSTABLE_DATA_ACCESS_H
#define IPSYSTEMSTATSTABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern          "C" {
#endif


    /*
     *********************************************************************
     * function declarations
     */

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table ipSystemStatsTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * ipSystemStatsTable is subid 1 of ipTrafficStats.
     * Its status is Current.
     * OID: .1.3.6.1.2.1.4.31.1, length: 9
     */


    int            
        ipSystemStatsTable_init_data(ipSystemStatsTable_registration_ptr
                                     ipSystemStatsTable_reg);


    /*
     * TODO:180:o: Review ipSystemStatsTable cache timeout.
     * The number of seconds before the cache times out
     */
#define IPSYSTEMSTATSTABLE_CACHE_TIMEOUT   60

    void            ipSystemStatsTable_container_init(netsnmp_container **
                                                      container_ptr_ptr,
                                                      netsnmp_cache *
                                                      cache);
    int             ipSystemStatsTable_cache_load(netsnmp_container *
                                                  container);
    void            ipSystemStatsTable_cache_free(netsnmp_container *
                                                  container);

    int            
        ipSystemStatsTable_row_prep(ipSystemStatsTable_rowreq_ctx *
                                    rowreq_ctx);


#ifdef __cplusplus
}
#endif
#endif                          /* IPSYSTEMSTATSTABLE_DATA_ACCESS_H */
